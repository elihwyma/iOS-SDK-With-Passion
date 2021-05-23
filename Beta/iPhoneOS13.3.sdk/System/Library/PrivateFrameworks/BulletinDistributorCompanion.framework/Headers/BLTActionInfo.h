/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface BLTActionInfo : NSObject

{
    long long _actionType;
    NSString *_publisherBulletinID;
    NSString *_recordID;
    NSString *_sectionID;
    NSDictionary *_context;
}

@property (nonatomic) long long actionType;
@property (copy, nonatomic) NSString *publisherBulletinID;
@property (copy, nonatomic) NSString *recordID;
@property (copy, nonatomic) NSString *sectionID;
@property (retain, nonatomic) NSDictionary *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithActionType:(long long)arg1 publisherBulletinID:(id)arg2 recordID:(id)arg3 sectionID:(id)arg4 context:(id)arg5;

@end
