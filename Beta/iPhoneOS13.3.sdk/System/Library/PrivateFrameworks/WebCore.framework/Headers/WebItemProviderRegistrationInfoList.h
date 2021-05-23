/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h>

@class NSData, NSItemProvider, NSString;

@interface WebItemProviderRegistrationInfoList : NSObject

{
    struct RetainPtr<NSMutableArray> _representations;
    NSString *_suggestedName;
    long long _preferredPresentationStyle;
    NSData *_teamData;
    struct CGSize _preferredPresentationSize;
}

@property (nonatomic) struct CGSize preferredPresentationSize;
@property (copy, nonatomic) NSString *suggestedName;
@property (nonatomic, readonly) NSItemProvider *itemProvider;
@property (nonatomic) long long preferredPresentationStyle;
@property (copy, nonatomic) NSData *teamData;

- (id)init;
- (void)dealloc;
- (id)description;
- (id).cxx_construct;
- (unsigned long long)numberOfItems;
- (id)itemAtIndex:(unsigned long long)arg1;
- (void)addData:(id)arg1 forType:(id)arg2;
- (void)addPromisedType:(id)arg1 fileCallback:(CDUnknownBlockType)arg2;
- (void)enumerateItems:(CDUnknownBlockType)arg1;
- (void)addRepresentingObject:(id)arg1;

@end
