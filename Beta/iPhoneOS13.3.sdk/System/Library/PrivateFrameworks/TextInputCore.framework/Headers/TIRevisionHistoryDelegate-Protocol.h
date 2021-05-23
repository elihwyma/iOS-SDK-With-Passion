/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <TextInputCore/Swift-Protocol.h>

@protocol TIRevisionHistoryDelegate <Swift>

- (unsigned short)incrementUsageTrackingKeyForAutocorrectionStatistic:autocorrectionTypes: /* Error: Ran out of types for this method. */;
- (unsigned short)incrementUsageTrackingKey: /* Error: Ran out of types for this method. */;
- (unsigned short)incrementUsageTrackingKeyForAppWithIsSentence: /* Error: Ran out of types for this method. */;
- (unsigned short)incrementLanguageModelCount:tokenID:context:contextLength:saveToDifferentialPrivacy: /* Error: Ran out of types for this method. */;
- (unsigned short)decrementLanguageModelCount:tokenID:context:contextLength: /* Error: Ran out of types for this method. */;
- (unsigned short)registerNegativeEvidence:tokenID:context:contextLength:intendedTokenID:hint: /* Error: Ran out of types for this method. */;
- (unsigned short)findTokenIDForWord:context:contextLength:tokenLookupMode:surfaceFormPtr:hasCaseInsensitiveStaticVariant: /* Error: Ran out of types for this method. */;
- (unsigned short)findTokenIDForWord:context:contextLength:tokenLookupMode: /* Error: Ran out of types for this method. */;
- (unsigned short)addWord:context:contextLength:surfaceFormPtr: /* Error: Ran out of types for this method. */;

@end
