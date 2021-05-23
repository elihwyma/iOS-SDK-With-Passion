/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class CAContext, NSMutableDictionary, NSString;

@interface TIKeyboardSecureCandidateRenderer : NSObject

{
    NSMutableDictionary *_secureCandidateCache;
    CAContext *_context;
    NSString *_localeIdentifier;
    NSMutableDictionary *_accessibilityLabelCache;
}

@property (retain, nonatomic) NSMutableDictionary *secureCandidateCache;
@property (nonatomic, readonly) CAContext *context;
@property (retain, nonatomic) NSString *localeIdentifier;

+ (id)allRenderers;

- (id)init;
- (void)dealloc;
- (id)initWithLocaleIdentifier:(id)arg1;
- (id)localizedStringForKey:(id)arg1;
- (id)_truncationSentinel;
- (id)initForLocalizedStrings;
- (struct __CFArray *)arrayOfContexts:(unsigned long long)arg1 withRenderTraits:(id)arg2;
- (struct __CFArray *)imagesFromContexts:(struct __CFArray *)arg1;
- (struct __CFArray *)imagesFromSecureCandidates:(id)arg1 withRenderTraits:(id)arg2 outAccessibilityLabels:(id *)arg3;
- (id)accessibilityLabelsForSecureHeaders:(id)arg1 secureContents:(id)arg2 truncationSentinel:(id)arg3;
- (void)cacheAccessibilityLabel:(id)arg1 forSlotID:(unsigned int)arg2;
- (id)accessibilityLabelForSlotID:(unsigned int)arg1;
- (id)localizedApplicationNameWithBundleIdentifier:(id)arg1;
- (id)slotIDsFromSecureCandidates:(id)arg1 withRenderTraits:(id)arg2;
- (struct CGImage *)imageForSendCurrentLocationWithRenderTraits:(id)arg1;
- (unsigned int)slotIDForSendCurrentLocationWithRenderTraits:(id)arg1;
- (void)clearSecureCandidateCache;
- (id)cachedCandidateForSecureCandidate:(id)arg1;
- (id)updateCachedCandidate:(id)arg1 withCandidateString:(id)arg2;
- (id)cachedPayloadForSecureCandidateSlotID:(unsigned int)arg1;

@end
