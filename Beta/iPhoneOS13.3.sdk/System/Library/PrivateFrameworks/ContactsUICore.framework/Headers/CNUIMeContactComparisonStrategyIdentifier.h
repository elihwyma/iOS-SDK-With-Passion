/*
 Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

#import <NSObject.h>

@class NSString;

@interface CNUIMeContactComparisonStrategyIdentifier : NSObject

{
    NSString *_meContactIdentifierFound;
}

@property (retain, nonatomic) NSString *meContactIdentifierFound;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isMeContact:(id)arg1;
- (id)meContactIdentifiers;
- (void)meContactChangedInStore:(id)arg1;

@end
