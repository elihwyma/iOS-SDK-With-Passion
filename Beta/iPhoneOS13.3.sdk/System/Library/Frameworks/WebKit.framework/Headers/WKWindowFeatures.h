/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface WKWindowFeatures : NSObject

{
    struct ObjectStorage<API::WindowFeatures> _windowFeatures;
}

@property (nonatomic, readonly) NSNumber *_locationBarVisibility;
@property (nonatomic, readonly) NSNumber *_scrollbarsVisibility;
@property (nonatomic, readonly) NSNumber *_fullscreenDisplay;
@property (nonatomic, readonly) NSNumber *_dialogDisplay;
@property (nonatomic, readonly) NSNumber *menuBarVisibility;
@property (nonatomic, readonly) NSNumber *statusBarVisibility;
@property (nonatomic, readonly) NSNumber *toolbarsVisibility;
@property (nonatomic, readonly) NSNumber *allowsResizing;
@property (nonatomic, readonly) NSNumber *x;
@property (nonatomic, readonly) NSNumber *y;
@property (nonatomic, readonly) NSNumber *width;
@property (nonatomic, readonly) NSNumber *height;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) struct Object *_apiObject;

- (void)dealloc;

@end
