/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class NSString;

@protocol PXContextualMemoriesSetting <Swift>

@property (nonatomic, readonly) NSString *headerTitle;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *subtitle;

- (unsigned short)resetToDefault;

@end
