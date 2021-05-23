/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <Foundation/NSData.h>

@interface NSData (WBXMLAdditions)

+ (_Bool)expectsContent;
+ (_Bool)acceptsTopLevelLeaves;
+ (_Bool)parsingLeafNode;
+ (_Bool)parsingWithSubItems;
+ (_Bool)frontingBasicTypes;
+ (_Bool)notifyOfUnknownTokens;

- (int)parsingState;
- (id)initWithASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 lengthUntilEndOfTerminator:(int)arg6;
- (id)initForLengthTokenOfLength:(unsigned long long)arg1;

@end
