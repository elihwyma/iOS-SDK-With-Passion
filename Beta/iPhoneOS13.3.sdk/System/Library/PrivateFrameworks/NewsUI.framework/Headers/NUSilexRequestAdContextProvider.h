/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

#import <NewsUI/Swift-Protocol.h>

@class NSString, SXAdRequest;

@interface NUSilexRequestAdContextProvider : NSObject <Swift>

{
    SXAdRequest *_request;
}

@property (nonatomic, readonly) SXAdRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)adContextValueForKeyPath:(id)arg1;
- (id)contextProvidersForKeyPath:(id)arg1;
- (id)initWithAdRequest:(id)arg1;
- (id)creativeTypeFromBannerType:(unsigned long long)arg1;

@end
