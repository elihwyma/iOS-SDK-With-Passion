/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/Swift-Protocol.h>

@class NSDate, NSString;

@protocol WFSortableGalleryObject <Swift>

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) NSDate *modifiedAt;
@property (nonatomic, readonly) NSString *persistentIdentifier;

@end
