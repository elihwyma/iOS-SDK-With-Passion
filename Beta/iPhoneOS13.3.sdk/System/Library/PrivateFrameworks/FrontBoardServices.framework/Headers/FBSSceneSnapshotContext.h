/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

#import <FrontBoardServices/Swift-Protocol.h>

@class BSSettings, FBSSceneSettings, NSSet, NSString;

@interface FBSSceneSnapshotContext : NSObject <Swift>

{
    NSString *_sceneID;
    NSString *_name;
    FBSSceneSettings *_settings;
    struct CGRect _frame;
    double _scale;
    double _expirationInterval;
    NSSet *_layersToExclude;
    BSSettings *_clientExtendedData;
}

@property (copy, nonatomic) FBSSceneSettings *settings;
@property (copy, nonatomic, readonly) NSString *sceneID;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) struct CGRect frame;
@property (nonatomic) double scale;
@property (copy, nonatomic) NSSet *layersToExclude;
@property (nonatomic) double expirationInterval;
@property (copy, nonatomic) BSSettings *clientExtendedData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)contextWithSceneID:(id)arg1 settings:(id)arg2;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)initWithSceneID:(id)arg1 settings:(id)arg2;

@end
