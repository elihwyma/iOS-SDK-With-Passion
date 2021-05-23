/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSMutableDictionary, NSString;

@interface SKUICompletion : NSObject <Swift>

{
    NSString *_alternateTitle;
    NSString *_title;
    NSString *_URLString;
}

@property (nonatomic, readonly) NSString *alternateTitle;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *URLString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSMutableDictionary *cacheRepresentation;

- (id)initWithCacheRepresentation:(id)arg1;
- (id)initWithCompletionDictionary:(id)arg1;

@end
