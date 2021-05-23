/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@protocol PVTaskTokenPoolDelegate;

@interface PVTaskTokenPool : NSObject

{
    unsigned long long _tokenCounter;
    struct stack<unsigned long, std::__1::deque<unsigned long, std::__1::allocator<unsigned long>>> _tokenData;
    struct mutex _tokenLock;
    id <PVTaskTokenPoolDelegate> _delegate;
}

@property (weak, nonatomic) id <PVTaskTokenPoolDelegate> delegate;

- (id)init;
- (id).cxx_construct;
- (void)returnToken:(id)arg1;
- (id)initWithOffset:(unsigned long long)arg1;
- (id)getToken;

@end
