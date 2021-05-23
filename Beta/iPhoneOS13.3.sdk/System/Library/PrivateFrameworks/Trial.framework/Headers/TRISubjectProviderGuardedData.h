/*
 Image: /System/Library/PrivateFrameworks/Trial.framework/Trial
 */

#import <Foundation/NSObject.h>

@class NSDate, NSMutableDictionary, TRISubject;

@interface TRISubjectProviderGuardedData : NSObject

{
    TRISubject *subject;
    NSDate *nextRotationDate;
    NSMutableDictionary *tempDeviceIds;
}

@end
