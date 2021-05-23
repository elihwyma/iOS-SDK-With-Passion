/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface SXTangierTextRenderCollector : NSObject

{
    NSMutableDictionary *_flows;
    NSDictionary *_previousFlows;
    NSMutableDictionary *_layoutsByComponentIdentifier;
}

@property (retain, nonatomic) NSMutableDictionary *flows;
@property (retain, nonatomic) NSDictionary *previousFlows;
@property (retain, nonatomic) NSMutableDictionary *layoutsByComponentIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)addTextStorage:(id)arg1 withLayout:(id)arg2 forNamedFlow:(id)arg3 directLayerHostView:(id)arg4 selectable:(_Bool)arg5 componentIdentifier:(id)arg6;
- (id)itemWithIdentifier:(id)arg1 storage:(id)arg2 directLayerHost:(id)arg3 inItems:(id)arg4;
- (void)storeItem:(id)arg1 forFlowName:(id)arg2;
- (void)buildFlowsAndUpdateInfosWithICC:(id)arg1;
- (_Bool)tangierTextRepAllowsSelection:(id)arg1;
- (void)buildFlowsAndUpdateInfosWithICC:(id)arg1 updateBlock:(CDUnknownBlockType)arg2;
- (id)infoForStorage:(id)arg1 selection:(id)arg2;
- (id)flowLayoutForComponentIdentifier:(id)arg1;

@end
