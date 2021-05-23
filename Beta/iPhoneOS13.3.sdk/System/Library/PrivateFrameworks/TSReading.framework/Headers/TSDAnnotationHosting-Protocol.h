/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/Swift-Protocol.h>

@class NSDate, NSString, TSDCommentStorage, TSKAnnotationAuthor;

@protocol TSKModel;

@protocol TSDAnnotationHosting <Swift>

@property (retain, nonatomic) TSKAnnotationAuthor *author;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic) id <TSKModel> model;
@property (nonatomic, readonly) NSString *changeTrackingString;
@property (copy, nonatomic) TSDCommentStorage *storage;

- (unsigned short)isEqual: /* Error: Ran out of types for this method. */;
- (unsigned short)commitText: /* Error: Ran out of types for this method. */;

@end
