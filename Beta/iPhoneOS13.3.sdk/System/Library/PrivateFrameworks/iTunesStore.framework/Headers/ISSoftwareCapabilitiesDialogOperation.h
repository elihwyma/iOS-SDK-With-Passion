/*
 Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class NSDictionary;

@interface ISSoftwareCapabilitiesDialogOperation

{
    NSDictionary *_mismatches;
    id _requiredCapabilities;
}

@property (readonly) NSDictionary *mismatches;
@property (readonly) id requiredCapabilities;

- (void)dealloc;
- (void)run;
- (id)initWithRequiredCapabilities:(id)arg1 mismatches:(id)arg2;
- (void)_postDefaultDialog;

@end
