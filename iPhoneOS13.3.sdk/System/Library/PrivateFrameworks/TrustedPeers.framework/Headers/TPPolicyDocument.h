//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface TPPolicyDocument : NSObject
{
    NSUInteger _policyVersion;
    NSString *_policyHash;
    NSData *_protobuf;
    NSArray *_modelToCategory;
    NSDictionary *_categoriesByView;
    NSDictionary *_introducersByCategory;
    NSDictionary *_redactions;
    NSArray *_keyViewMapping;
}

+ (BOOL)isEqualKeyViewMapping:(id)arg1 other:(id)arg2;
+ (id)redactionWithEncrypter:(id)arg1 modelToCategory:(id)arg2 categoriesByView:(id)arg3 introducersByCategory:(id)arg4 keyViewMapping:(id)arg5 error:(id )arg6;
+ (id)policyDocumentWithVersion:(NSUInteger)arg1 modelToCategory:(id)arg2 categoriesByView:(id)arg3 introducersByCategory:(id)arg4 redactions:(id)arg5 keyViewMapping:(id)arg6 hashAlgo:(long long)arg7 error:(id )arg8;
+ (id)policyDocWithHash:(id)arg1 data:(id)arg2;
+ (void)addKeyViewMapping:(id)arg1 toPB:(id)arg2;
+ (void)addRedactions:(id)arg1 toPB:(id)arg2;
+ (void)addIntroducersByCategory:(id)arg1 toPB:(id)arg2;
+ (void)addCategoriesByView:(id)arg1 toPB:(id)arg2;
+ (void)addModelToCategory:(id)arg1 toPB:(id)arg2;
+ (id)redactionsFromPb:(id)arg1;
+ (id)introducersByCategoryFromPb:(id)arg1;
+ (id)categoriesByViewFromPb:(id)arg1;
+ (id)modelToCategoryFromPb:(id)arg1;
+ (id)dictionaryOfSetsFromDictionaryOfArrays:(id)arg1;
+ (id)modelToCategoryRulesFromArray:(id)arg1;
@property(retain, nonatomic) NSArray *keyViewMapping; // @synthesize keyViewMapping=_keyViewMapping;
@property(retain, nonatomic) NSDictionary *redactions; // @synthesize redactions=_redactions;
@property(retain, nonatomic) NSDictionary *introducersByCategory; // @synthesize introducersByCategory=_introducersByCategory;
@property(retain, nonatomic) NSDictionary *categoriesByView; // @synthesize categoriesByView=_categoriesByView;
@property(retain, nonatomic) NSArray *modelToCategory; // @synthesize modelToCategory=_modelToCategory;
@property(retain, nonatomic) NSData *protobuf; // @synthesize protobuf=_protobuf;
@property(retain, nonatomic) NSString *policyHash; // @synthesize policyHash=_policyHash;
@property(nonatomic) NSUInteger policyVersion; // @synthesize policyVersion=_policyVersion;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPolicyDocument:(id)arg1;
- (id)policyWithSecrets:(id)arg1 decrypter:(id)arg2 error:(id )arg3;

@end
