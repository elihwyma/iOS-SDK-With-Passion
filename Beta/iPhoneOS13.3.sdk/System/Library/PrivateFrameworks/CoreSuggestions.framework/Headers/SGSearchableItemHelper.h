/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@interface SGSearchableItemHelper : NSObject

+ (_Bool)mailItemIsRecent:(id)arg1 emailHeaders:(id)arg2;
+ (id)mailItemMessageIdHeaderValues:(id)arg1;
+ (_Bool)mailItemIsValid:(id)arg1 emailHeaders:(id)arg2 mailboxIdentifiers:(id)arg3;
+ (_Bool)mailItemIsInDrafts:(id)arg1 mailboxIdentifiers:(id)arg2;
+ (_Bool)mailItemIsInSent:(id)arg1 mailboxIdentifiers:(id)arg2;
+ (_Bool)mailItemIsInTrash:(id)arg1 mailboxIdentifiers:(id)arg2;
+ (_Bool)mailItemIsFromSupportedAccount:(id)arg1;
+ (_Bool)searchableItemIsEmpty:(id)arg1;
+ (_Bool)searchableItemIsOutgoing:(id)arg1;
+ (_Bool)mailItemIsSPAM:(id)arg1 emailHeaders:(id)arg2 mailboxIdentifiers:(id)arg3;
+ (_Bool)mailItemIsRecent:(id)arg1;
+ (_Bool)mailItemIsValid:(id)arg1;
+ (_Bool)mailItemIsSPAM:(id)arg1;
+ (_Bool)mailItemIsInDrafts:(id)arg1;
+ (_Bool)mailItemIsInSent:(id)arg1;
+ (_Bool)mailItemIsInTrash:(id)arg1;
+ (_Bool)mailItemIsTooBig:(id)arg1;
+ (id)serializeAttributes:(id)arg1;
+ (id)serializeAttributesAndBody:(id)arg1;
+ (id)deserializeAttributes:(id)arg1;
+ (id)deserializeAttributes:(id)arg1 andBody:(id)arg2;
+ (id)deserializeAttributesAndBody:(id)arg1;

@end
