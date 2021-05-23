/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

#import <FrontBoard/Swift-Protocol.h>

@class BSSettings, FBSSceneSettings, NSDate, NSSet, NSString;

@interface FBSceneSnapshotContext : NSObject <Swift>

{
    NSString *_sceneID;
    struct CGRect _frame;
    _Bool _opaque;
    NSSet *_layersToExclude;
    FBSSceneSettings *_settings;
    long long _orientation;
    NSDate *_expirationDate;
    double _scale;
    BSSettings *_clientExtendedData;
}

@property (copy, nonatomic, readonly) NSString *sceneID;
@property (copy, nonatomic) FBSSceneSettings *settings;
@property (nonatomic) struct CGRect frame;
@property (nonatomic, getter=isOpaque) _Bool opaque;
@property (nonatomic) double scale;
@property (copy, nonatomic) NSSet *layersToExclude;
@property (nonatomic) long long orientation;
@property (retain, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) BSSettings *clientExtendedData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)contextWithFBSContext:(id)arg1;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithScene:(id)arg1;
- (id)initWithFBSContext:(id)arg1;

@end
