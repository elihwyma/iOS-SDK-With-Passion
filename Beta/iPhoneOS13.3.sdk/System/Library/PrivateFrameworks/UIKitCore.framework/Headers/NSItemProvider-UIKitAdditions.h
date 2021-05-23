/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSItemProvider.h>

@class NSData;

@interface NSItemProvider (UIKitAdditions)

@property (copy, nonatomic) NSData *teamData;
@property (nonatomic) struct CGSize preferredPresentationSize;
@property (nonatomic) long long preferredPresentationStyle;

+ (id)itemProviderWithURL:(id)arg1 title:(id)arg2;

- (void)_NSItemProviderDidRegisterObject:(id)arg1;
- (void)setDataAvailability:(_Bool)arg1 forTypeIdentifier:(id)arg2;
- (id)dataAvailabilityByTypeIdentifier;
- (void)registerFileProviderItemForTypeIdentifier:(id)arg1 visibility:(long long)arg2 loadHandler:(CDUnknownBlockType)arg3;
- (void)registerFileRepresentationForTypeIdentifier:(id)arg1 dataAvailableImmediately:(_Bool)arg2 visibility:(long long)arg3 loadHandler:(CDUnknownBlockType)arg4;
- (_Bool)isDataAvailableImmediatelyForTypeIdentifier:(id)arg1;
- (Class)_highestFidelityClassForLoading:(id)arg1;
- (id)_loadObjectOfClass:(Class)arg1 userInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_addFileURLRepresentationIfPossible;

@end
