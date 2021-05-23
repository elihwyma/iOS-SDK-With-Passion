/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableArray, NSMutableSet, NSString;

@interface CoreDAVItem : NSObject

{
    NSString *_name;
    NSString *_nameSpace;
    NSMutableSet *_attributes;
    NSMutableArray *_extraChildItems;
    NSData *_payload;
    _Bool _useCDATA;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *nameSpace;
@property (retain, nonatomic) NSMutableSet *attributes;
@property (retain, nonatomic) NSMutableArray *extraChildItems;
@property (retain, nonatomic) NSData *payload;
@property (nonatomic) _Bool useCDATA;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)copyParseRules;
+ (id)parseRuleCache;

- (id)init;
- (void)write:(id)arg1;
- (id)hashString;
- (_Bool)validate;
- (id)payloadAsString;
- (long long)payloadAsNSInteger;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (void)parserFoundAttributes:(id)arg1;
- (id)copyParseRules;
- (id)childrenToWrite;
- (void)setPayloadAsString:(id)arg1;
- (void)parserFoundPayload:(id)arg1;
- (void)parserFoundUnrecognizedElement:(id)arg1;
- (void)parserSuggestsBaseURL:(id)arg1;
- (id)generateXMLString;

@end
