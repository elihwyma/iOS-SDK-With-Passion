/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface NMSSHConfig : NSObject

{
    NSArray *_hostConfigs;
}

@property (retain, nonatomic) NSArray *hostConfigs;

+ (id)configFromFile:(id)arg1;

- (id)initWithString:(id)arg1;
- (id)initWithFile:(id)arg1;
- (id)arrayFromString:(id)arg1;
- (void)parseLine:(id)arg1 intoArray:(id)arg2;
- (void)parseHostWithArguments:(id)arg1 intoArray:(id)arg2;
- (void)parseHostNameWithArguments:(id)arg1 intoArray:(id)arg2;
- (void)parseUserWithArguments:(id)arg1 intoArray:(id)arg2;
- (void)parsePortWithArguments:(id)arg1 intoArray:(id)arg2;
- (void)parseIdentityFileWithArguments:(id)arg1 intoArray:(id)arg2;
- (id)blanksCharacterSet;
- (struct _NSRange)rangeOfQuotedSubstringInString:(id)arg1 startingAtIndex:(unsigned long long)arg2;
- (struct _NSRange)rangeInString:(id)arg1 fromLocationUntilBlankOrEnd:(unsigned long long)arg2;
- (struct _NSRange)rangeOfFirstTokenInString:(id)arg1 suffix:(id *)arg2;
- (id)hostConfigForHost:(id)arg1;
- (int)host:(id)arg1 matchesPatternList:(id)arg2;
- (_Bool)host:(id)arg1 matchesSubpattern:(id)arg2;

@end
