/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

#import <NewsUI/Swift-Protocol.h>

@class FCIssue, NSString;

@interface NUIssueAdContextProvider : NSObject <Swift>

{
    FCIssue *_issue;
}

@property (nonatomic, readonly) FCIssue *issue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)adContextValueForKeyPath:(id)arg1;
- (id)initWithIssue:(id)arg1;

@end
