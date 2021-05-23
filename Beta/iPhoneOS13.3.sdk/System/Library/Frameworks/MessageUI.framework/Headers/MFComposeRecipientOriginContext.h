/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MFComposeRecipientOriginContext : NSObject

{
    NSString *_searchTerm;
    unsigned long long _resultType;
}

@property (retain, nonatomic) NSString *searchTerm;
@property (nonatomic) unsigned long long resultType;

@end
