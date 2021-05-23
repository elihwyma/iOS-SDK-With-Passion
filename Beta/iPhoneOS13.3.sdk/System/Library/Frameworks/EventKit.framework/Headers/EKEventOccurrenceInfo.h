/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

@class EKObjectID;

@interface EKEventOccurrenceInfo : NSObject

{
    EKObjectID *_objectID;
    double _date;
}

@property (retain, nonatomic) EKObjectID *objectID;
@property (nonatomic) double date;

- (id)description;
- (id)initWithObjectID:(id)arg1 date:(double)arg2;

@end
