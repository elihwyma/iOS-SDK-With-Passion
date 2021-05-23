/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

#import <Message/Swift-Protocol.h>

@class EFMutableInt64Set, NSArray, NSString;

@interface MFMessageCriterion : NSObject <Swift>

{
    NSString *_criterionIdentifier;
    int _qualifier;
    long long _type;
    NSString *_name;
    NSString *_uniqueId;
    NSString *_expression;
    NSArray *_criteria;
    int _dateUnitType;
    unsigned int _allCriteriaMustBeSatisfied:1;
    unsigned int _dateIsRelative:1;
    unsigned int _includeRelatedMessages:1;
    NSArray *_requiredHeaders;
    _Bool _preferFullTextSearch;
    _Bool _useFlaggedForUnreadCount;
    _Bool _expressionIsSanitized;
    _Bool _includeRemoteBodyContent;
    NSArray *_expressionLanguages;
    EFMutableInt64Set *_libraryIdentifiers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly, getter=isFullTextSearchableCriterion) _Bool fullTextSearchableCriterion;
@property (nonatomic, readonly) NSString *spotlightQueryString;
@property (nonatomic) long long criterionType;
@property (retain, nonatomic) NSString *criterionIdentifier;
@property (nonatomic) int qualifier;
@property (copy, nonatomic) NSString *expression;
@property (copy, nonatomic) NSArray *expressionLanguages;
@property (retain, nonatomic) EFMutableInt64Set *libraryIdentifiers;
@property (nonatomic) _Bool preferFullTextSearch;
@property (nonatomic) _Bool useFlaggedForUnreadCount;
@property (nonatomic) _Bool includeRelatedMessages;
@property (nonatomic) _Bool expressionIsSanitized;
@property (nonatomic) _Bool includeRemoteBodyContent;
@property (retain, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *criteria;

+ (id)_todayDateComponents;
+ (id)orCompoundCriterionWithCriteria:(id)arg1;
+ (id)unreadMessageCriterion;
+ (long long)criterionTypeForString:(id)arg1;
+ (id)andCompoundCriterionWithCriteria:(id)arg1;
+ (id)messageIsDeletedCriterion:(_Bool)arg1;
+ (id)messageIsServerSearchResultCriterion:(_Bool)arg1;
+ (id)criterionForMailboxURL:(id)arg1;
+ (id)criterionForNotDeletedConversationID:(long long)arg1;
+ (id)criterionForMailboxPredictionMessageQuery:(unsigned long long)arg1 variable:(id)arg2;
+ (id)messageIsJournaledCriterion:(_Bool)arg1;
+ (id)criterionExcludingMailboxes:(id)arg1;
+ (id)criteriaFromDefaultsArray:(id)arg1 removingRecognizedKeys:(_Bool)arg2;
+ (id)stringForCriterionType:(long long)arg1;
+ (id)criterionForMailbox:(id)arg1;
+ (id)notCriterionWithCriterion:(id)arg1;
+ (id)criterionForConversationID:(long long)arg1;
+ (id)_criterionForDateReceivedBetweenDateComponents:(id)arg1 endDateComponents:(id)arg2;
+ (id)_criterionForDateReceivedBetween:(id)arg1 endDate:(id)arg2;
+ (id)criterionForDateReceivedNewerThanDate:(id)arg1;
+ (id)criterionForDateReceivedOlderThanDate:(id)arg1;
+ (id)expressionForDate:(id)arg1;
+ (id)criteriaFromDefaultsArray:(id)arg1;
+ (id)defaultsArrayFromCriteria:(id)arg1;
+ (id)criterionFromDefaultsDictionary:(id)arg1;
+ (id)defaultsDictionaryFromCriterion:(id)arg1;
+ (void)_updateAddressComments:(id)arg1;
+ (id)criterionForAccount:(id)arg1;
+ (id)criterionForLibraryID:(id)arg1;
+ (id)criterionForDocumentID:(id)arg1;
+ (id)VIPSenderMessageCriterion;
+ (id)threadNotifyMessageCriterion;
+ (id)threadMuteMessageCriterion;
+ (id)flaggedMessageCriterion;
+ (id)readMessageCriterion;
+ (id)includesMeCriterion;
+ (id)toMeCriterion;
+ (id)ccMeCriterion;
+ (id)hasAttachmentsCriterion;
+ (id)todayMessageCriterion;
+ (id)yesterdayMessageCriterion;
+ (id)lastWeekMessageCriterion;
+ (id)matchEverythingCriterion;
+ (id)matchNothingCriterion;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithType:(long long)arg1 qualifier:(int)arg2 expression:(id)arg3;
- (id)simplifiedCriterion;
- (id)fixOnce;
- (id)_criterionForSQL;
- (id)_evaluateFTSCriterionWithIndex:(id)arg1 mailboxIDs:(id)arg2;
- (_Bool)allCriteriaMustBeSatisfied;
- (id)_resolveWithIndex:(id)arg1 mailboxIDs:(id)arg2;
- (void)setAllCriteriaMustBeSatisfied:(_Bool)arg1;
- (id)_collapsedMessageNumberCriterion:(id)arg1 allMustBeSatisfied:(_Bool)arg2 collapsedIndexes:(id *)arg3;
- (_Bool)hasLibraryIDCriterion;
- (id)SQLExpressionWithContext:(id)arg1 depth:(unsigned int)arg2;
- (unsigned int)bestBaseTable;
- (void)_addCriteriaSatisfyingPredicate:(CDUnknownFunctionPointerType)arg1 toCollector:(id)arg2;
- (_Bool)includesCriterionSatisfyingPredicate:(CDUnknownFunctionPointerType)arg1 restrictive:(_Bool)arg2;
- (id)criterionByApplyingTransform:(CDUnknownBlockType)arg1;
- (id)criteriaSatisfyingPredicate:(CDUnknownFunctionPointerType)arg1;
- (id)criterionForSQL;
- (id)SQLExpressionWithTables:(unsigned int *)arg1 baseTable:(unsigned int)arg2 protectedDataAvailable:(_Bool)arg3 searchableIndex:(id)arg4 mailboxIDs:(id)arg5 propertyMapper:(id)arg6;
- (id)extractedDateCriterion;
- (id)extractedUnreadCriterion;
- (_Bool)dateIsRelative;
- (int)dateUnits;
- (void)setDateUnits:(int)arg1;
- (void)setDateIsRelative:(_Bool)arg1;
- (id)_SQLExpressionForMailboxCriterion;
- (_Bool)hasNonFullTextSearchableCriterion;
- (id)_spotlightQueryString;
- (id)_queryWithAttributes:(id)arg1 matchingValue:(id)arg2 qualifier:(int)arg3;
- (id)_queryWithAttributes:(id)arg1 matchingValue:(id)arg2;
- (id)_comparisonOperationMatchingValue:(id)arg1 qualifier:(int)arg2;
- (id)criteriaForSpotlightCriteria:(id)arg1;
- (id)_attributesForHeaderCriterion;
- (id)_wordQueryWithAttributes:(id)arg1 languages:(id)arg2 expression:(id)arg3;
- (id)unreadCountCriterion;
- (id)initWithDictionary:(id)arg1 andRemoveRecognizedKeysIfMutable:(_Bool)arg2;
- (id)initWithCriterion:(id)arg1 expression:(id)arg2;
- (int)messageRuleQualifierForString:(id)arg1;
- (id)descriptionWithDepth:(unsigned int)arg1;
- (id)_qualifierString;
- (id)stringForMessageRuleQualifier:(int)arg1;
- (_Bool)doesMessageSatisfyCriterion:(id)arg1;
- (id)_headersRequiredForEvaluation;
- (_Bool)_evaluatePartOfStructure:(id)arg1;
- (_Bool)_evaluateCompoundCriterion:(id)arg1;
- (_Bool)_evaluateFlagCriterion:(id)arg1;
- (_Bool)_evaluateAddressBookCriterion:(id)arg1;
- (_Bool)_evaluateHeaderCriterion:(id)arg1;
- (_Bool)_evaluateSenderHeaderCriterion:(id)arg1;
- (_Bool)_evaluateAccountCriterion:(id)arg1;
- (_Bool)_evaluateDateCriterion:(id)arg1;
- (_Bool)_evaluateAddressHistoryCriterion:(id)arg1;
- (_Bool)_evaluateFullNameCriterion:(id)arg1;
- (_Bool)_evaluateIsDigitallySignedCriterion:(id)arg1;
- (_Bool)_evaluateIsEncryptedCriterion:(id)arg1;
- (_Bool)_evaluatePriorityIsNormalCriterion:(id)arg1;
- (_Bool)_evaluatePriorityIsHighCriterion:(id)arg1;
- (_Bool)_evaluatePriorityIsLowCriterion:(id)arg1;
- (_Bool)_evaluateAttachmentCriterion:(id)arg1;
- (_Bool)_evaluateConversationIDCriterion:(id)arg1;
- (_Bool)_evaluateMailboxCriterion:(id)arg1;
- (id)simplifyOnce;
- (id)dateFromExpression;
- (_Bool)isVIPCriterion;
- (id)daBasicSearchString;
- (id)daSearchPredicate;

@end
