/*
 Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <DAEAS/ASWBXMLToXMLConverter.h>

@interface ASFileDescriptorWBXMLToXMLConverter : ASWBXMLToXMLConverter

{
    int _input;
    int _output;
}

@property (nonatomic) int input;
@property (nonatomic) int output;

- (_Bool)runSynchronously;
- (void)outputString:(id)arg1;
- (void)outputData:(id)arg1;
- (long long)readFromInput;
- (id)initWithInputFD:(int)arg1 outputFD:(int)arg2 usingMetadata:(_Bool)arg3;

@end
