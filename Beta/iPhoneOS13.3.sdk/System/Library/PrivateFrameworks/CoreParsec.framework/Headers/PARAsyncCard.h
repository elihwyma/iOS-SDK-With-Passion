/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <SearchFoundation/SFCard.h>

@class NSURL;

@interface PARAsyncCard : SFCard

{
    double _scale;
    unsigned long long _clientQueryId;
}

@property (nonatomic) double scale;
@property (copy, nonatomic, readonly) NSURL *cardURL;
@property (nonatomic, readonly) unsigned long long clientQueryId;

+ (_Bool)supportsSecureCoding;
+ (id)cardWithTitle:(id)arg1 url:(id)arg2 session:(id)arg3 scale:(double)arg4 queryId:(unsigned long long)arg5;
+ (id)cardWithTitle:(id)arg1 url:(id)arg2 session:(id)arg3 scale:(double)arg4 queryId:(unsigned long long)arg5 clientQueryId:(unsigned long long)arg6;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
