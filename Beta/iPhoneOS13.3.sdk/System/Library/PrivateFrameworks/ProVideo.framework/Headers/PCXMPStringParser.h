/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSMutableString, NSString;

@interface PCXMPStringParser : NSObject

{
    NSMutableString *tagParent1;
    NSMutableString *tagParent2;
    NSMutableString *tagParent3;
    NSMutableString *valueString;
    NSMutableDictionary *tagDict1;
    NSMutableDictionary *tagDict2;
    NSMutableDictionary *tagDict3;
    NSMutableDictionary *mDict;
    NSString *xmlError;
    NSArray *parentTags1;
    NSArray *parentTags2;
    NSArray *parentTags3;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parserDidStartDocument:(id)arg1;
- (void)parserDidEndDocument:(id)arg1;
- (void)parseXMPData:(id)arg1;
- (void)parseXMPString:(id)arg1;
- (id)parsedData;
- (id)parseErrorString;

@end
