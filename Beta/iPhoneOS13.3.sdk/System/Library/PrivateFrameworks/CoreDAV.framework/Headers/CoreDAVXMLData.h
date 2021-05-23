/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <Foundation/NSObject.h>

@class CoreDAVXMLData_Impl, NSData, NSMutableArray, NSMutableDictionary;

@interface CoreDAVXMLData : NSObject

{
    _Bool _shouldAddFormattingSpaces;
    CoreDAVXMLData_Impl *_dataImpl;
    _Bool _docHasEnded;
    NSMutableDictionary *_seenURIsToPrefixes;
    NSMutableDictionary *_seenURIsToDepth;
    NSMutableArray *_elementStack;
}

@property (nonatomic) _Bool shouldAddFormattingSpaces;
@property (nonatomic, readonly) NSData *data;

+ (_Bool)string:(id)arg1 isEqualToXmlCharString:(const char *)arg2;

- (id)init;
- (void)dealloc;
- (void)appendElement:(id)arg1 inNamespace:(id)arg2 withStringContent:(id)arg3 withAttributeNamesAndValues:(id)arg4;
- (void)startElement:(id)arg1 inNamespace:(id)arg2 withAttributeNamesAndValues:(id)arg3;
- (void)endElement:(id)arg1 inNamespace:(id)arg2;
- (void)startElement:(id)arg1 inNamespace:(id)arg2 withAttributes:(id)arg3;
- (const char *)_prefixForNameSpace:(const char *)arg1;
- (void)_startElement:(id)arg1 inNamespace:(id)arg2;
- (void)_startElement:(id)arg1 inNamespace:(id)arg2 withAttributeNamesAndValues:(id)arg3 attributes:(char *)arg4;
- (void)appendElement:(id)arg1 inNamespace:(id)arg2 withStringContentAsCDATA:(id)arg3 withAttributeNamesAndValues:(id)arg4;

@end
