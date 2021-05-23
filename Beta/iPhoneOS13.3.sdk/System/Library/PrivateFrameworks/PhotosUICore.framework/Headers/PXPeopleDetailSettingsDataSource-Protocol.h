/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/Swift-Protocol.h>

@class NSString;

@protocol PXPeopleDetailSettingsDataSource <Swift>

@property (copy, nonatomic) NSString *title;
@property (nonatomic, readonly) unsigned long long numberOfItems;
@property (nonatomic, readonly) _Bool hasMoreDetails;
@property (nonatomic, readonly) long long action;

- (unsigned short)imageAtIndex:targetSize:withCompletionBlock: /* Error: Ran out of types for this method. */;

@end
