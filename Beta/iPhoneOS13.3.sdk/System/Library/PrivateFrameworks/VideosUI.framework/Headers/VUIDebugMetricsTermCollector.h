/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface VUIDebugMetricsTermCollector : NSObject

{
    NSMutableSet *_mutableCommonTerms;
    NSMutableSet *_mutableTimingTerms;
}

@property (retain, nonatomic) NSMutableSet *mutableCommonTerms;
@property (retain, nonatomic) NSMutableSet *mutableTimingTerms;
@property (nonatomic, readonly) NSSet *whitelistedTerms;
@property (nonatomic, readonly) NSSet *blacklistedTerms;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSSet *timingTerms;
@property (nonatomic, readonly) NSSet *baseTerms;
@property (nonatomic, readonly) NSSet *commonTerms;

- (id)init;
- (void)collectTermsFrom:(id)arg1;
- (void)populateCommonTermsFrom:(id)arg1;

@end
