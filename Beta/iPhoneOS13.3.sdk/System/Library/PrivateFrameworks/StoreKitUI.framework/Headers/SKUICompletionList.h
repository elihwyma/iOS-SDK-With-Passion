/*
 Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

#import <Foundation/NSObject.h>

#import <StoreKitUI/Swift-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;

@interface SKUICompletionList : NSObject <Swift>

{
    NSArray *_completions;
    NSString *_title;
}

@property (nonatomic, readonly) NSArray *completions;
@property (nonatomic, readonly) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSMutableDictionary *cacheRepresentation;

- (id)initWithCacheRepresentation:(id)arg1;
- (id)initWithCompletionListDictionary:(id)arg1;

@end
