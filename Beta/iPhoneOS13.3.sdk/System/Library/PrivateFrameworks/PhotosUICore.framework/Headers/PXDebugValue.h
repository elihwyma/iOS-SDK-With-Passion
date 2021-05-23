/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PXDebugValue : NSObject

{
    NSString *_label;
}

@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) unsigned long long highlightStyle;

- (id)initWithLabel:(id)arg1;

@end
