/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

@protocol ASParsing

+ (unsigned short)expectsContent;
+ (unsigned short)acceptsTopLevelLeaves;
+ (unsigned short)parsingLeafNode;
+ (unsigned short)parsingWithSubItems;
+ (unsigned short)frontingBasicTypes;
+ (unsigned short)notifyOfUnknownTokens;

- (unsigned short)parsingState;
- (unsigned short)parseASParseContext:root:parent:callbackDict:streamCallbackDict:account: /* Error: Ran out of types for this method. */;

@end
