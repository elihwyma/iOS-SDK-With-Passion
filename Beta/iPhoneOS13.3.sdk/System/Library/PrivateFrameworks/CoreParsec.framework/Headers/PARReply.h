/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSString, NSURLRequest, NSURLResponse, PARTask;

@interface PARReply : NSObject

{
    NSArray *_rawResponse;
    NSURLRequest *_httpRequest;
    NSURLResponse *_httpResponse;
    NSData *_data;
    PARTask *_task;
    double _scale;
    NSString *_geoSessionEntityString;
    NSArray *_localSuggestions;
}

@property (retain, nonatomic) NSURLRequest *httpRequest;
@property (retain, nonatomic) NSURLResponse *httpResponse;
@property (retain, nonatomic) NSArray *rawResponse;
@property (retain, nonatomic) NSData *data;
@property (weak, nonatomic) PARTask *task;
@property (nonatomic) double scale;
@property (copy, nonatomic) NSString *geoSessionEntityString;
@property (retain, nonatomic) NSArray *localSuggestions;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
