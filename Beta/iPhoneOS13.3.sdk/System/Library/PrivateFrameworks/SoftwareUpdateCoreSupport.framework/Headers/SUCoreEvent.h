/*
 Image: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, NSURL;

@interface SUCoreEvent : NSObject

{
    _Bool _changedSinceReported;
    NSMutableDictionary *_allFields;
    NSURL *_serverURL;
    NSString *_reportedUUID;
}

@property (retain, nonatomic) NSMutableDictionary *allFields;
@property (nonatomic) _Bool changedSinceReported;
@property (retain, nonatomic) NSURL *serverURL;
@property (retain, nonatomic) NSString *reportedUUID;

- (_Bool)isSuccess;
- (id)initWithEventDictionary:(id)arg1 extendingWith:(id)arg2 reportingToServer:(id)arg3;
- (id)getAugmentedEvent;
- (_Bool)isEqualErrorEvent:(id)arg1;
- (void)incrementErrorCount;

@end
