/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, TSDCommentStorage, TSKAnnotationAuthor, TSWPChange;

@protocol TSKModel;

@interface TSWPChangeDetails : NSObject

{
    NSString *mChangeString;
    id <TSKModel> model;
    TSWPChange *_change;
}

@property (retain, nonatomic) TSWPChange *change;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) int annotationType;
@property (nonatomic, readonly) int annotationDisplayStringType;
@property (retain, nonatomic) TSKAnnotationAuthor *author;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic) id <TSKModel> model;
@property (nonatomic, readonly) NSString *changeTrackingString;
@property (copy, nonatomic) TSDCommentStorage *storage;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqualToChangeDetails:(id)arg1;
- (id)initWithChange:(id)arg1 changeString:(id)arg2;
- (void)commitText:(id)arg1;

@end
