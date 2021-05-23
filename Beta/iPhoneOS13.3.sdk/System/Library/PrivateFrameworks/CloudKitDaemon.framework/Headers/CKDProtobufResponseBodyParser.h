/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <CloudKitDaemon/CKDResponseBodyParser.h>

@class NSMutableData;

@interface CKDProtobufResponseBodyParser : CKDResponseBodyParser

{
    _Bool _parsingStandaloneMessage;
    _Bool _isParsing;
    Class _messageClass;
    NSMutableData *_tailParserData;
    unsigned long long _curObjectLength;
}

@property (retain, nonatomic) NSMutableData *tailParserData;
@property (nonatomic) unsigned long long curObjectLength;
@property (nonatomic) _Bool isParsing;
@property (nonatomic) Class messageClass;
@property (nonatomic) _Bool parsingStandaloneMessage;

- (id)initWithQoS:(long long)arg1;
- (void)processData:(id)arg1;
- (void)finishWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)_parseObjectFromData:(id)arg1 rawData:(id)arg2;
- (_Bool)_parseObjects:(_Bool)arg1;

@end
