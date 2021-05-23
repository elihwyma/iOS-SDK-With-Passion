/*
 Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ADFrequencyCap : NSObject

{
    NSString *_identifier;
    NSString *_adMetadata;
    long long _downloadType;
    double _setTime;
}

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *adMetadata;
@property (nonatomic) long long downloadType;
@property (nonatomic) double setTime;

- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)dictionaryRepresentation;
- (id)splitCapData:(id)arg1;

@end
