/*
 Image: /System/Library/PrivateFrameworks/AdID.framework/AdID
 */

#import <AdCore/ADVector.h>

@class NSString;

@interface ADAppVector : ADVector

{
    NSString *_adamID;
}

@property (retain, nonatomic) NSString *adamID;

- (id)description;
- (void)parseDataString:(id)arg1;
- (id)initWith:(id)arg1 version:(id)arg2;

@end
