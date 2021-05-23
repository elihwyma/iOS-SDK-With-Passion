/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface IKPlayerRequestSeekToDateEventUserInfo : NSObject

{
    _Bool _shouldSeek;
    NSDate *_requestedDate;
    NSDate *_currentDate;
    NSDate *_proposedDate;
}

@property (nonatomic, readonly) NSDate *requestedDate;
@property (nonatomic, readonly) NSDate *currentDate;
@property (nonatomic, readonly) _Bool shouldSeek;
@property (nonatomic, readonly) NSDate *proposedDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSDictionary *properties;

- (void)processReturnJSValue:(id)arg1 inContext:(id)arg2;
- (id)initWithRequestDate:(id)arg1 currentDate:(id)arg2;

@end
