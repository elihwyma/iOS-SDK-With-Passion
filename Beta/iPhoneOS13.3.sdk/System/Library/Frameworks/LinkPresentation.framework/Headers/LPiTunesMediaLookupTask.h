/*
 Image: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
 */

#import <AppleMediaServices/AMSLookup.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface LPiTunesMediaLookupTask : AMSLookup

{
    NSString *_identifier;
    NSString *_storefrontCountryCode;
}

- (void)start:(CDUnknownBlockType)arg1;
- (id)sharedBag;
- (id)_compileQueryParametersWithBundleIds:(id)arg1 itemIds:(id)arg2;
- (id)callerID;
- (id)initWithIdentifier:(id)arg1 storefrontCountryCode:(id)arg2;

@end
