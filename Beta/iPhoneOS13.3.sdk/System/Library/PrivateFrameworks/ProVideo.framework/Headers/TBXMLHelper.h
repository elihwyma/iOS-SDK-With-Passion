/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString, NSXMLParser;

@interface TBXMLHelper : NSObject

{
    NSXMLParser *_parser;
    NSMutableDictionary *_settings;
    _Bool _interested;
    _Bool _successfullyEndedParsing;
    NSString *_key;
    int _depth;
}

@property (nonatomic, readonly) NSDictionary *sceneSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithContentsOfURL:(id)arg1;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (_Bool)parse;

@end
