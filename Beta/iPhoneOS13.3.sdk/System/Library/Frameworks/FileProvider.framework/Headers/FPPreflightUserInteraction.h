/*
 Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

#import <Foundation/NSObject.h>

@class FPPreflightUserInteractionAlert, NSArray, NSPredicate, NSString;

@interface FPPreflightUserInteraction : NSObject

{
    FPPreflightUserInteractionAlert *_alert;
    NSString *_providerIdentifier;
    NSArray *_subInteractions;
    NSPredicate *_predicate;
}

@property (retain, nonatomic) FPPreflightUserInteractionAlert *alert;
@property (retain, nonatomic) NSString *providerIdentifier;
@property (retain, nonatomic) NSArray *subInteractions;
@property (retain, nonatomic) NSPredicate *predicate;

+ (id)userInteractionErrorsInInfoPlistDict:(id)arg1 forAction:(id)arg2 bundleID:(id)arg3 hierarchyServicer:(id)arg4 sourceItems:(id)arg5 destinationItem:(id)arg6 localizationLookup:(id)arg7;
+ (id)interactionFromDictionary:(id)arg1 localizationLookup:(id)arg2 providerIdentifier:(id)arg3;
+ (id)_retrieveFPItemHierarchyLookupForItem:(id)arg1 itemsHierarchyCache:(id)arg2 hierarchyServicer:(id)arg3;
+ (void)_setupEvaluationObjectsByName:(id)arg1 hierarchyServicer:(id)arg2;
+ (id)evaluationObjectsForAction:(id)arg1 sourceItems:(id)arg2 destinationItem:(id)arg3 hierarchyServicer:(id)arg4;
+ (id)userInteractionErrorsInInfoPlistInteractions:(id)arg1 evaluationObjectsByName:(id)arg2 localizationLookup:(id)arg3 providerIdentifier:(id)arg4;
+ (id)userInteractionErrorsInInfoPlistDict:(id)arg1 forAction:(id)arg2 bundleID:(id)arg3 hierarchyServicer:(id)arg4 sourceNSFPItems:(id)arg5 destinationNSFPItem:(id)arg6 localizationLookup:(id)arg7 provider:(id)arg8 domain:(id)arg9 extensionCapabilities:(unsigned long long)arg10 useFPFS:(_Bool)arg11;
+ (id)userInteractionItemsForDestinationItem:(id)arg1;
+ (id)userInteractionErrorsForAction:(id)arg1 sourceItems:(id)arg2 destinationItem:(id)arg3 hierarchyServicer:(id)arg4;

- (id)description;
- (id)_evaluateWithObjectsByName:(id)arg1 sourceItems:(id)arg2 sourceItemsLookups:(id)arg3 errorIndex:(unsigned long long *)arg4;
- (_Bool)_shouldSetupDestinationItemHierarchyLookup;
- (_Bool)_shouldSetupSourceItemHierarchyLookup;
- (id)evaluateWithObjectsByName:(id)arg1;

@end
