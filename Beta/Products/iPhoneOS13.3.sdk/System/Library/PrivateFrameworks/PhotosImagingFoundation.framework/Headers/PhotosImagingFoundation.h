#import "IPAAdjustment.h"
#import "IPAAdjustmentEnvelope.h"
#import "IPAAdjustmentSerialization.h"
#import "IPAAdjustmentStack.h"
#import "IPAAdjustmentStackSerializer.h"
#import "IPAAdjustmentVersion.h"
#import "IPAAdjustmentVersionInfo.h"
#import "IPAAffineImageTransform.h"
#import "IPAAggregateLargestImageSizePolicy.h"
#import "IPAAutoRegistry.h"
#import "IPAAutoRegistryEntry.h"
#import "IPAAutoSettings.h"
#import "IPABestFitEvenTotalPixelCountImageSizePolicy.h"
#import "IPABestFitEvenWidthTotalPixelCountImageSizePolicy.h"
#import "IPABestFitImageHeightPolicy.h"
#import "IPABestFitImageSizePolicy.h"
#import "IPABestFitImageWidthPolicy.h"
#import "IPABestFitShortSideWithLongSideLimit.h"
#import "IPABestFitTotalPixelCountImageSizePolicy.h"
#import "IPACropOperator.h"
#import "IPAEditDescription.h"
#import "IPAEditOperation.h"
#import "IPAGeometryOperator.h"
#import "IPAGeometryOperatorSequence.h"
#import "IPAIdentityOperator.h"
#import "IPAImageGeometry.h"
#import "IPAImageIdentityTransform.h"
#import "IPAImageSizePolicy.h"
#import "IPAImageTransform.h"
#import "IPAImageTransformSequence.h"
#import "IPALocalPreviewSizeRegistry.h"
#import "IPAManualAutoSettings.h"
#import "IPAMetadata.h"
#import "IPAMutableRectArray.h"
#import "IPAMutableRegion.h"
#import "IPAOrientationOperator.h"
#import "IPAOriginalSizePolicy.h"
#import "IPAPendingAutoSettings.h"
#import "IPAPerspectiveOperator.h"
#import "IPAPerspectiveTransform.h"
#import "IPAPhotoAdjustment.h"
#import "IPAPhotoAdjustmentPipeline.h"
#import "IPAPhotoAdjustmentStack.h"
#import "IPAPhotoAdjustmentStackSerializer.h"
#import "IPAPhotoAdjustmentStackSerializer_v10.h"
#import "IPAPosterFrameOperation.h"
#import "IPAPreviewSizePolicy.h"
#import "IPAPreviewSizeRegistry.h"
#import "IPARectArray.h"
#import "IPARegion.h"
#import "IPARemoveAutoSettings.h"
#import "IPAScaleImageSizePolicy.h"
#import "IPAScaleOperator.h"
#import "IPAShortestEdgeImageSizePolicy.h"
#import "IPASloMoOperation.h"
#import "IPAStraightenOperator.h"
#import "IPATrimOperation.h"
#import "IPAVideoAdjustment.h"
#import "IPAVideoAdjustmentStack.h"
#import "IPAVideoAdjustmentStackSerializer.h"
#import "IPAVideoAdjustmentStackSerializer_SLM_v10.h"
#import "IPAVideoAdjustmentStackSerializer_SLM_v11.h"
#import "IPAVideoAdjustmentStackSerializer_v10.h"
#import "IPAVideoOperation.h"
#import "IPAVideoPlaybackSettings.h"