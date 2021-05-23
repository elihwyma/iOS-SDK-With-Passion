/*
 Image: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
 */

#import <NSObject.h>

@class NSArray;

@interface MFIMAPConnectionFlagSearchRequest : NSObject

{
    _Bool _isPositiveMatch;
    unsigned long long _mask;
    NSArray *_searchTerms;
}

@property (nonatomic, readonly) unsigned long long mask;
@property (nonatomic, readonly) NSArray *searchTerms;
@property (nonatomic, readonly) _Bool isPositiveMatch;

+ (id)requestWithMask:(unsigned long long)arg1 searchTerms:(id)arg2 positiveMatch:(_Bool)arg3;

- (id)initWithMask:(unsigned long long)arg1 searchTerms:(id)arg2 positiveMatch:(_Bool)arg3;

@end
