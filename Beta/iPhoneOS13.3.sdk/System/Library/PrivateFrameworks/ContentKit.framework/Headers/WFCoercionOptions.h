/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

#import <ContentKit/Swift-Protocol.h>

@class NSDictionary;

@interface WFCoercionOptions : NSObject <Swift>

{
    NSDictionary *_dictionary;
}

@property (nonatomic, readonly) NSDictionary *dictionary;

+ (id)new;
+ (id)optionsWithDictionary:(id)arg1;
+ (void)registerDefaultDisallowedCoercionPath:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)optionsByAddingContentsOfOptions:(id)arg1;
- (_Bool)coercionPathIsDisallowed:(id)arg1;
- (id)preferredTypes;
- (id)itemClassPrioritizationType;
- (void)makeContactAccessResourceAvailableIfNeededWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)makeRemoteServerAccessResourceAvailableIfNeededWithURLs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
