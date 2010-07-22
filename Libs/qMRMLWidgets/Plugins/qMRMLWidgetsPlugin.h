#ifndef __qMRMLWidgetsPlugin_h
#define __qMRMLWidgetsPlugin_h

#include "qMRMLColorTableComboBoxPlugin.h"
#include "qMRMLLinearTransformSliderPlugin.h"
#include "qMRMLListWidgetPlugin.h"
#include "qMRMLMatrixWidgetPlugin.h"
#include "qMRMLNodeComboBoxPlugin.h"
#include "qMRMLRangeWidgetPlugin.h"
#include "qMRMLROIWidgetPlugin.h"
#include "qMRMLSliceControllerWidgetPlugin.h"
#include "qMRMLSliceInformationWidgetPlugin.h"
#include "qMRMLSliceViewWidgetPlugin.h"
#include "qMRMLSlicesControllerWidgetPlugin.h"
#include "qMRMLThreeDViewPlugin.h"
#include "qMRMLTransformSlidersPlugin.h"
#include "qMRMLTreeWidgetPlugin.h"
#include "qMRMLVolumeThresholdWidgetPlugin.h"
#include "qMRMLWidgetPlugin.h"
#include "qMRMLWindowLevelWidgetPlugin.h"
#include "qMRMLSceneFactoryWidgetPlugin.h"

#include <QDesignerCustomWidgetCollectionInterface>
#include "qMRMLWidgetsPluginExport.h"

// \class Group the plugins in one library
class QMRML_WIDGETS_PLUGIN_EXPORT qMRMLWidgetsPlugin : public QObject,
                           public QDesignerCustomWidgetCollectionInterface
{
  Q_OBJECT
  Q_INTERFACES(QDesignerCustomWidgetCollectionInterface);

public:
  QList<QDesignerCustomWidgetInterface*> customWidgets() const
    {
    QList<QDesignerCustomWidgetInterface *> plugins;
    plugins << new qMRMLColorTableComboBoxPlugin
            << new qMRMLLinearTransformSliderPlugin
            << new qMRMLListWidgetPlugin
            << new qMRMLMatrixWidgetPlugin
            << new qMRMLNodeComboBoxPlugin
            << new qMRMLRangeWidgetPlugin
            << new qMRMLROIWidgetPlugin
            << new qMRMLThreeDViewPlugin
            << new qMRMLSliceControllerWidgetPlugin
            << new qMRMLSliceInformationWidgetPlugin
            << new qMRMLSliceViewWidgetPlugin
            << new qMRMLSlicesControllerWidgetPlugin
            << new qMRMLTransformSlidersPlugin
            << new qMRMLTreeWidgetPlugin
            << new qMRMLVolumeThresholdWidgetPlugin
            << new qMRMLWidgetPlugin
            << new qMRMLWindowLevelWidgetPlugin
            << new qMRMLSceneFactoryWidgetPlugin;
    return plugins;
    }
};

#endif
