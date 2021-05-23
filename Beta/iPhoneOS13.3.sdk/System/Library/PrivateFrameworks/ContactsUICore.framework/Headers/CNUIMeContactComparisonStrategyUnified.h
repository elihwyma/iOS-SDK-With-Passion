/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class NSSet, NSString;

@interface CNUIMeContactComparisonStrategyUnified : NSObject

{
    NSSet *_meContactIdentifiersFound;
}

@property (retain, nonatomic) NSSet *meContactIdentifiersFound;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isMeContact:(id)arg1;
- (id)meContactIdentifiers;
- (void)meContactChangedInStore:(id)arg1;
- (id)identifierAndLinkIdentifierAndLinkedContactIdentifiersFromContact:(id)arg1;

@end
