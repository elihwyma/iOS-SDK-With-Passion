/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/Swift-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;

@interface PSIObject : NSObject <Swift>

{
    NSMutableDictionary *_synonymsByOriginalWord;
    NSString *_uuid;
    NSArray *_tokens;
}

@property (copy, nonatomic, setter=setUUID:) NSString *uuid;
@property (nonatomic, readonly) NSArray *tokens;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)clear;
- (id)initWithUUID:(id)arg1;
- (id)_initForCopy:(_Bool)arg1;
- (id)initForReverse;
- (void)addContentString:(id)arg1 category:(short)arg2 owningCategory:(short)arg3;
- (void)addIdentifier:(id)arg1 category:(short)arg2 owningCategory:(short)arg3;
- (void)addContentString:(id)arg1 identifier:(id)arg2 category:(short)arg3 owningCategory:(short)arg4;
- (void)addSynonym:(id)arg1 category:(short)arg2 originalContentString:(id)arg3;
- (void)enumerateSynonymsForOriginalContentString:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)reverse;

@end
