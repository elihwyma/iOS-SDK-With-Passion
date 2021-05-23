/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@protocol _MKURLHandlerDelegate;

@interface _MKURLHandler : NSObject

{
    id <_MKURLHandlerDelegate> _delegate;
}

@property (weak, nonatomic) id <_MKURLHandlerDelegate> delegate;

+ (unsigned char)_MKGetURLSchemeTypeFor:(id)arg1;
+ (_Bool)canHandleURL:(id)arg1;

- (_Bool)_handleMapsURL:(id)arg1 sourceApplication:(id)arg2 context:(id)arg3;
- (_Bool)_handleSharedMapURL:(id)arg1 sourceApplication:(id)arg2 context:(id)arg3;
- (_Bool)_handleMapItemURL:(id)arg1 sourceApplication:(id)arg2 context:(id)arg3;
- (_Bool)_handleMapItemHandlesURL:(id)arg1 sourceApplication:(id)arg2 context:(id)arg3;
- (_Bool)_treatRegionFrom:(id)arg1;
- (_Bool)_treatSearchRegionFrom:(id)arg1;
- (void)_treatMapTypeFrom:(id)arg1;
- (void)_treatTrackingModeFrom:(id)arg1;
- (_Bool)_treatContentProvider:(id)arg1;
- (void)_treatGenericOptionsFrom:(id)arg1;
- (_Bool)_treatMuninViewStateFrom:(id)arg1;
- (_Bool)_treatCollectionFrom:(id)arg1;
- (_Bool)_treatFavoritesFrom:(id)arg1;
- (_Bool)_treatTransitLineFrom:(id)arg1;
- (_Bool)_treatPinPositionFrom:(id)arg1;
- (_Bool)_treatNavigationDirectionsFrom:(id)arg1;
- (_Bool)_treatSearchFrom:(id)arg1;
- (_Bool)_treatTesterFrom:(id)arg1;
- (_Bool)_treatCarDestinationsFrom:(id)arg1;
- (_Bool)_handleMapItems:(id)arg1 withOptions:(id)arg2 url:(id)arg3 sourceApplication:(id)arg4 context:(id)arg5;
- (void)adjustOptionsForRAP:(id)arg1 options:(id *)arg2;
- (_Bool)handleURL:(id)arg1 sourceApplication:(id)arg2 context:(id)arg3;

@end
