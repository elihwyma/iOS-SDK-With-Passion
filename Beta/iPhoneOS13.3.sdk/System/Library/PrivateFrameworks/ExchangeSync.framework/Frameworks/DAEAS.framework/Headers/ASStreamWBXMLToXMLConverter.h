/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASWBXMLToXMLConverter.h>

@class NSInputStream, NSOutputStream, NSString;

@interface ASStreamWBXMLToXMLConverter : ASWBXMLToXMLConverter

{
    NSInputStream *_input;
    NSOutputStream *_output;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;
- (_Bool)runSynchronously;
- (void)outputString:(id)arg1;
- (void)outputData:(id)arg1;
- (long long)readFromInput;
- (id)initWithWBXMLInput:(id)arg1 forOutput:(id)arg2 usingMetadata:(_Bool)arg3;

@end
