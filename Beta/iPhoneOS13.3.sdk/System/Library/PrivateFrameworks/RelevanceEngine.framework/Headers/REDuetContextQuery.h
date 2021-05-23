/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSArray, NSSet, NSString, NSUUID, _CDContextualPredicate, _CDMDCSContextualPredicate;

@interface REDuetContextQuery : NSObject

{
    NSArray *_searchKeyPaths;
    CDUnknownBlockType _evalBlock;
    NSSet *_devices;
    NSUUID *_uuid;
    NSString *_name;
    _CDContextualPredicate *_predicate;
    _CDMDCSContextualPredicate *_remotePredicate;
}

@property (nonatomic, readonly) NSUUID *uuid;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) _CDContextualPredicate *predicate;
@property (nonatomic, readonly) _CDMDCSContextualPredicate *remotePredicate;
@property (nonatomic, readonly) NSString *registrationID;
@property (nonatomic, readonly) NSSet *keyPaths;
@property (retain, nonatomic) NSSet *devices;

- (id)initWithPredicate:(id)arg1 remotePredicate:(id)arg2 name:(id)arg3 evaluationBlock:(CDUnknownBlockType)arg4;
- (id)_localRegistrationWithCallback:(CDUnknownBlockType)arg1;
- (id)_remoteRegistrationForDevice:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)_sortedKeyPaths:(id)arg1;
- (id)_keyPathsForDevice:(id)arg1;
- (id)_localKeyPaths;
- (id)createRegistrationsWithCallback:(CDUnknownBlockType)arg1;
- (id)valueFromUserContext:(id)arg1;

@end
