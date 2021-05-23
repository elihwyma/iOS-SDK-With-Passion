/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/MTLModel.h>

#import <WorkflowKit/Swift-Protocol.h>

@class NSDictionary, NSString, NSURL;

@interface WFiTunesObject : MTLModel <Swift>

{
    NSString *_identifier;
    NSString *_name;
    NSString *_kind;
    NSString *_censoredName;
    NSURL *_viewURL;
    NSDictionary *_artworkURLs;
}

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *kind;
@property (nonatomic, readonly) NSString *censoredName;
@property (nonatomic, readonly) NSURL *viewURL;
@property (nonatomic, readonly) NSDictionary *artworkURLs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryValue;
@property (copy, nonatomic, readonly) NSString *wfName;

+ (_Bool)supportsSecureCoding;
+ (id)JSONKeyPathsByPropertyKey;
+ (Class)classForParsingJSONDictionary:(id)arg1;
+ (id)allowedSecureCodingClassesByPropertyKey;
+ (id)identifierJSONTransformer;
+ (id)artistIDJSONTransformer;
+ (id)releaseDateJSONTransformer;
+ (id)artworkURLsJSONTransformer;

- (id)initWithName:(id)arg1 identifier:(id)arg2 kind:(id)arg3;

@end
