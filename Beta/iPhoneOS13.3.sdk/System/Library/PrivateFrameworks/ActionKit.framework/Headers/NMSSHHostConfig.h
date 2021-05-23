/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSNumber, NSString;

@interface NMSSHHostConfig : NSObject

{
    NSArray *_hostPatterns;
    NSString *_hostname;
    NSString *_user;
    NSNumber *_port;
    NSArray *_identityFiles;
}

@property (retain, nonatomic) NSArray *hostPatterns;
@property (retain, nonatomic) NSString *hostname;
@property (retain, nonatomic) NSString *user;
@property (retain, nonatomic) NSNumber *port;
@property (retain, nonatomic) NSArray *identityFiles;

- (id)init;
- (void)mergeFrom:(id)arg1;
- (id)arrayByRemovingDuplicateElementsFromArray:(id)arg1;
- (id)mergedArray:(id)arg1 withArray:(id)arg2;

@end
